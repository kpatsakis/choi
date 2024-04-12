void fun()
{
  char* entity_3;
  char entity_4[93] = "";
  memset(entity_4, 'W', 93-1);
  entity_4[93-1]='0';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 93*sizeof(char));
}