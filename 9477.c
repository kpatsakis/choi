void fun()
{
  char entity_3[68] = "";
  entity_3 = NULL;
  char* entity_2;
  char entity_9 = 't';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  memset(entity_3, 'Y', 68-1);
  entity_3[68-1]='';
  memcpy(entity_2, entity_3, 68*sizeof(char));
}