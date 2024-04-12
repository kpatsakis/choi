void fun()
{
  char* entity_8;
  char entity_4[58] = "";
  entity_4 = NULL;
  memset(entity_4, 'm', 58-1);
  entity_4[58-1]='';
  entity_8 = (char*)malloc(92*sizeof(char));
  entity_8[92-1]='';
  entity_4[84] = 'Q';
}