void fun()
{
  char* entity_9;
  char entity_2[53] = "";
  memset(entity_2, 'O', 53-1);
  entity_2[53-1]='0';
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_2, 53*sizeof(char));
}