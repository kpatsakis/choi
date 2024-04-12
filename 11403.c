void fun()
{
  char entity_0[34] = "";
  char entity_7 = 'q';
  char* entity_3;
  memset(entity_0, 'B', 34-1);
  entity_0[34-1]='0';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_0, 34*sizeof(char));
}