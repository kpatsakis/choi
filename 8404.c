void fun()
{
  char entity_1 = 'v';
  char* entity_7;
  char entity_6[54] = "";
  entity_6 = NULL;
  memset(entity_6, 't', 54-1);
  entity_6[54-1]='';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  entity_6[36] = 'Y';
}