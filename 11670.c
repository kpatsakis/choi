void fun()
{
  int entity_3 = 39;
  char entity_6[85] = "";
  char* entity_1;
  entity_1 = (char*)malloc(30*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'z', 85-1);
  entity_6[85-1]='0';
  strcpy(entity_1, entity_6);
}