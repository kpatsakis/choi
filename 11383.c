void fun()
{
  char* entity_2;
  char entity_9[29] = "";
  memset(entity_9, 'N', 29-1);
  entity_9[29-1]='0';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_9, 29*sizeof(char));
}