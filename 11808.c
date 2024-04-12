void fun()
{
  int entity_9 = 89;
  char entity_6 = 'L';
  char* entity_3;
  char entity_2[53] = "";
  memset(entity_2, 'C', 53-1);
  entity_2[53-1]='0';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_2);
}