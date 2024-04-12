void fun()
{
  int entity_9 = 89;
  char* entity_3;
  char* entity_2;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_6 = 'z';
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_8, 'F', entity_9-1);
  entity_8[entity_9-1]='';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  memcpy(entity_3, entity_8, entity_9*sizeof(char));
}