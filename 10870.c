void fun()
{
  char entity_2[37] = "";
  char* entity_9;
  memset(entity_2, 'g', 37-1);
  entity_2[37-1]='0';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[0]='0';
  entity_2[78] = 'K';
}