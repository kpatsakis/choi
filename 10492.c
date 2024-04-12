void fun()
{
  char* entity_2;
  char entity_7[72] = "";
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'i', 72-1);
  entity_7[72-1]='0';
  entity_7[20] = 'x';
}