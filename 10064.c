void fun()
{
  char* entity_9;
  char entity_7[35] = "";
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'z', 35-1);
  entity_7[35-1]='0';
  entity_7[2] = 'K';
}