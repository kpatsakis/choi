void fun()
{
  int entity_1 = 41;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_4[74] = "";
  entity_4 = NULL;
  char entity_3 = 'F';
  memset(entity_4, 'k', 74-1);
  entity_4[74-1]='';
  memset(entity_2, 'y', entity_1-1);
  entity_2[entity_1-1]='';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[92-1]='';
  memcpy(entity_7, entity_2, entity_1*sizeof(char));
}