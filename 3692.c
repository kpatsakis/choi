void fun()
{
  int entity_6 = 39;
  entity_6 = 51;
  char* entity_2;
  char* entity_0;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_8 = 'g';
  memset(entity_3, 'c', entity_6-1);
  entity_3[entity_6-1]='';
  entity_0 = (char*)malloc(43*sizeof(char));
  entity_0[43-1]='';
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  memcpy(entity_2, entity_3, entity_6*sizeof(char));
}