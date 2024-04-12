void fun()
{
  int entity_3 = 3;
  char* entity_8;
  char entity_4[85] = "";
  entity_4 = NULL;
  char entity_2 = 'Q';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_4, 'y', 85-1);
  entity_4[85-1]='';
  entity_3 = 97;
  memcpy(entity_8, entity_4, 85*sizeof(char));
}