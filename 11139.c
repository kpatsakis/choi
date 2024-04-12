void fun()
{
  int entity_2 = 17;
  char* entity_4;
  char entity_0 = 'Y';
  char entity_6[78] = "";
  memset(entity_6, 'r', 78-1);
  entity_6[78-1]='0';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_6);
}