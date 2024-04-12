void fun()
{
  char entity_7[90] = "";
  char entity_6 = 'h';
  char* entity_1;
  memset(entity_7, 'g', 90-1);
  entity_7[90-1]='0';
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, 90*sizeof(char));
}