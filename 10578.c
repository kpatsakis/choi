void fun()
{
  char* entity_8;
  char entity_7[92] = "";
  memset(entity_7, 'M', 92-1);
  entity_7[92-1]='0';
  entity_8 = (char*)malloc(3*sizeof(char));
  entity_8[0]='0';
  entity_7[49] = 'M';
}