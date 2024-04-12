void fun()
{
  int entity_1 = 38;
  entity_1 = 74;
  char entity_7[75] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_8;
  memset(entity_7, 'y', 75-1);
  entity_7[75-1]='';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memcpy(entity_8, entity_7, 75*sizeof(char));
}