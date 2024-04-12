void fun()
{
  int entity_8 = 23;
  char entity_3[10] = "";
  entity_3 = NULL;
  char entity_5[84] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(92*sizeof(char));
  entity_2[92-1]='';
  memset(entity_3, 'I', 10-1);
  entity_3[10-1]='';
  memset(entity_5, 'u', 84-1);
  entity_5[84-1]='';
  entity_8 = 85;
  entity_5[entity_8] = 'Z';
}