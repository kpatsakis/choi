void fun()
{
  int entity_0 = 30;
  char entity_5 = 'G';
  char entity_3[72] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'G', 72-1);
  entity_3[72-1]='0';
  memcpy(entity_7, entity_3, 72*sizeof(char));
}