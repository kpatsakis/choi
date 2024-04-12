void fun()
{
  char entity_6[92] = "";
  char* entity_9;
  char entity_4[29] = "";
  memset(entity_6, 'w', 92-1);
  entity_6[92-1]='0';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[0]='0';
  memset(entity_4, 's', 29-1);
  entity_4[29-1]='0';
  memcpy(entity_9, entity_4, 29*sizeof(char));
}