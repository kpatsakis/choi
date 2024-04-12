void fun()
{
  char* entity_8;
  char entity_3[100] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  memset(entity_3, 'u', 100-1);
  entity_3[100-1]='';
  entity_3[70] = 'P';
}