void fun()
{
  char* entity_7;
  char entity_8[72] = "";
  memset(entity_8, 'j', 72-1);
  entity_8[72-1]='0';
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, 72*sizeof(char));
}