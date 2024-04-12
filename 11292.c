void fun()
{
  char entity_2[26] = "";
  char* entity_6;
  char entity_9[29] = "";
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'M', 26-1);
  entity_2[26-1]='0';
  memset(entity_9, 's', 29-1);
  entity_9[29-1]='0';
  memcpy(entity_6, entity_9, 29*sizeof(char));
}