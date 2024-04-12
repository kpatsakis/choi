void fun()
{
  int entity_8 = 32;
  entity_8 = 80;
  char* entity_6;
  char* entity_5;
  char entity_4[41] = "";
  entity_4 = NULL;
  char entity_9[45] = "";
  entity_9 = NULL;
  memset(entity_9, 'a', 45-1);
  entity_9[45-1]='';
  entity_6 = (char*)malloc(70*sizeof(char));
  entity_6[70-1]='';
  memset(entity_4, 'O', 41-1);
  entity_4[41-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  memcpy(entity_5, entity_4, 41*sizeof(char));
}