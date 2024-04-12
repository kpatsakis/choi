void fun()
{
  char* entity_8;
  char entity_3[34] = "";
  memset(entity_3, 'g', 34-1);
  entity_3[34-1]='0';
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_3, 34*sizeof(char));
}