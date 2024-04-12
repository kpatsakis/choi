void fun()
{
  int entity_1 = 2;
  int entity_9 = 45;
  entity_9 = 70;
  char* entity_2;
  char* entity_5;
  char entity_3[26] = "";
  entity_3 = NULL;
  memset(entity_3, 'y', 26-1);
  entity_3[26-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[66-1]='';
  strcpy(entity_2, entity_3);
}