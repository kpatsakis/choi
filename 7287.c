void fun()
{
  int entity_6 = 6;
  char* entity_1;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[82-1]='';
  memset(entity_2, 'u', entity_6-1);
  entity_2[entity_6-1]='';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[94-1]='';
  entity_6 = 92;
  memcpy(entity_7, entity_2, entity_6*sizeof(char));
}