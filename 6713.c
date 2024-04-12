void fun()
{
  int entity_6 = 72;
  char* entity_3;
  char entity_7[77] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  memset(entity_7, 'M', 77-1);
  entity_7[77-1]='';
  memcpy(entity_3, entity_7, 77*sizeof(char));
}