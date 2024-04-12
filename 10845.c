void fun()
{
  char* entity_1;
  char entity_0[96] = "";
  memset(entity_0, 'q', 96-1);
  entity_0[96-1]='0';
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[0]='0';
  entity_0[78] = 'o';
}