void fun()
{
  char entity_5[91] = "";
  char* entity_2;
  entity_2 = (char*)malloc(61*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'j', 91-1);
  entity_5[91-1]='0';
  entity_5[94] = 'Y';
}