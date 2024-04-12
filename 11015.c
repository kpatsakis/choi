void fun()
{
  char entity_9[86] = "";
  char* entity_3;
  char entity_4[85] = "";
  memset(entity_9, 'g', 86-1);
  entity_9[86-1]='0';
  memset(entity_4, 's', 85-1);
  entity_4[85-1]='0';
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 85*sizeof(char));
}