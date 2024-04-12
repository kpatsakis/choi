void fun()
{
  int entity_6 = 12;
  int entity_5 = 97;
  char* entity_1;
  char* entity_4;
  char entity_3[94] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  memset(entity_3, 'C', 94-1);
  entity_3[94-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memcpy(entity_1, entity_3, 94*sizeof(char));
}