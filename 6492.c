void fun()
{
  int entity_9 = 21;
  entity_9 = 14;
  char* entity_7;
  char* entity_4;
  char entity_2[70] = "";
  entity_2 = NULL;
  memset(entity_2, 'R', 70-1);
  entity_2[70-1]='';
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  strcpy(entity_4, entity_2);
}