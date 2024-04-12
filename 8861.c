void fun()
{
  char entity_2[77] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'F', 77-1);
  entity_2[77-1]='';
  entity_7 = (char*)malloc(80*sizeof(char));
  entity_7[80-1]='';
  memcpy(entity_7, entity_2, 77*sizeof(char));
}