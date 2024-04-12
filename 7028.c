void fun()
{
  int entity_6 = 86;
  char* entity_8;
  char entity_7 = 'Q';
  char entity_1[85] = "";
  entity_1 = NULL;
  memset(entity_1, 'u', 85-1);
  entity_1[85-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  entity_6 = 44;
  memcpy(entity_8, entity_1, 85*sizeof(char));
}