void fun()
{
  int entity_6 = 90;
  char entity_8 = 'i';
  char* entity_1;
  char* entity_0;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[97-1]='';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[92-1]='';
  memset(entity_3, 'M', entity_6-1);
  entity_3[entity_6-1]='';
  memcpy(entity_1, entity_3, entity_6*sizeof(char));
}