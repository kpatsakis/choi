void fun()
{
  int entity_3 = 66;
  char* entity_7;
  char* entity_2;
  char entity_1[71] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  memset(entity_1, 'V', 71-1);
  entity_1[71-1]='';
  strcpy(entity_7, entity_1);
}