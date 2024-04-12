void fun()
{
  int entity_4 = 40;
  int entity_2 = 45;
  char entity_8[76] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_8, 'r', 76-1);
  entity_8[76-1]='';
  memcpy(entity_6, entity_8, 76*sizeof(char));
}