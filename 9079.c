void fun()
{
  int entity_0 = 97;
  char entity_8[11] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'l', 11-1);
  entity_8[11-1]='';
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[80-1]='';
  memcpy(entity_7, entity_8, 11*sizeof(char));
}