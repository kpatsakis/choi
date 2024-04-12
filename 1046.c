void fun()
{
  int entity_2 = 12;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_5;
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memset(entity_7, 'o', entity_2-1);
  entity_7[entity_2-1]='';
  entity_4 = (char*)malloc(43*sizeof(char));
  entity_4[43-1]='';
  entity_2 = 88;
  memcpy(entity_5, entity_7, entity_2*sizeof(char));
}