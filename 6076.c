void fun()
{
  int entity_6 = 63;
  entity_6 = 98;
  char* entity_4;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char entity_7 = 'i';
  char* entity_5;
  char* entity_3;
  entity_4 = (char*)malloc(92*sizeof(char));
  entity_4[92-1]='';
  memset(entity_2, 'R', entity_6-1);
  entity_2[entity_6-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  memcpy(entity_4, entity_2, entity_6*sizeof(char));
}