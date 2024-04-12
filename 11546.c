void fun()
{
  char entity_6[89] = "";
  char entity_3[77] = "";
  char entity_9 = 'w';
  char* entity_7;
  memset(entity_6, 'c', 89-1);
  entity_6[89-1]='0';
  memset(entity_3, 'Z', 77-1);
  entity_3[77-1]='0';
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_6, 89*sizeof(char));
}