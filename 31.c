void fun()
{
  int entity_9 = 42;
  entity_9 = 61;
  char* entity_2;
  char* entity_6;
  char entity_7 = 'i';
  char* entity_0;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'c', entity_9-1);
  entity_1[entity_9-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  entity_0 = (char*)malloc(94*sizeof(char));
  entity_0[94-1]='';
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  memcpy(entity_6, entity_1, entity_9*sizeof(char));
}