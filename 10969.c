void fun()
{
  char entity_2[62] = "";
  char* entity_9;
  memset(entity_2, 'U', 62-1);
  entity_2[62-1]='0';
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[0]='0';
  entity_2[94] = 'H';
}