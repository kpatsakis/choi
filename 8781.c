void fun()
{
  int entity_6 = 91;
  char* entity_0;
  char entity_1[72] = "";
  entity_1 = NULL;
  char entity_8[80] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 80-1);
  entity_8[80-1]='';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  memset(entity_1, 'Q', 72-1);
  entity_1[72-1]='';
  memcpy(entity_0, entity_8, 80*sizeof(char));
}