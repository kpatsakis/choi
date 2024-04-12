void fun()
{
  int entity_6 = 4;
  int entity_2 = 53;
  int entity_0 = 22;
  char* entity_5;
  char entity_4[94] = "";
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'I', 94-1);
  entity_4[94-1]='0';
  memcpy(entity_5, entity_4, 94*sizeof(char));
}