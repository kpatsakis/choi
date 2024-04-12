void fun()
{
  char* entity_3;
  char entity_8[15] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  memset(entity_8, 'Z', 15-1);
  entity_8[15-1]='';
  entity_8[48] = 'M';
}