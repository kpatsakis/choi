void fun()
{
  char* entity_7;
  char entity_0[41] = "";
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'F', 41-1);
  entity_0[41-1]='0';
  memcpy(entity_7, entity_0, 41*sizeof(char));
}