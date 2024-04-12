void fun()
{
  char entity_4[49] = "";
  char* entity_3;
  char* entity_1;
  entity_3 = (char*)malloc(39*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'F', 49-1);
  entity_4[49-1]='0';
  memcpy(entity_1, entity_4, 49*sizeof(char));
}