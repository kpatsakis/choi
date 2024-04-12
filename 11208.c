void fun()
{
  char* entity_7;
  char entity_8[27] = "";
  memset(entity_8, 'P', 27-1);
  entity_8[27-1]='0';
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_8, 27*sizeof(char));
}