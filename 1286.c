void fun()
{
  int entity_1 = 9;
  entity_1 = 3;
  char* entity_7;
  char entity_2[40] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'r', 40-1);
  entity_2[40-1]='';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_2);
}