void fun()
{
  char entity_9[54] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_2;
  memset(entity_9, 'x', 54-1);
  entity_9[54-1]='';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  memcpy(entity_1, entity_9, 54*sizeof(char));
}